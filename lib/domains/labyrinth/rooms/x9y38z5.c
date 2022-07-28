inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 38, 5 }));
  set_short( "Passage - x9y38z5" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y38z5.c",
  "south" : DIR+"/rooms/x9y37z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
