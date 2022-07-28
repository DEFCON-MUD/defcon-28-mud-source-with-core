inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 34, 1 }));
  set_short( "Corridor - x21y34z1" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y35z1.c",
  "south" : DIR+"/rooms/x21y33z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
