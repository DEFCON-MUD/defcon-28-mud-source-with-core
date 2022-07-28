inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 32, 1 }));
  set_short( "Passage - x37y32z1" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y33z1.c",
  "south" : DIR+"/rooms/x37y31z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
