inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 30, 6 }));
  set_short( "Passage - x17y30z6" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y30z6.c",
  "north" : DIR+"/rooms/x17y31z6.c",
  "south" : DIR+"/rooms/x17y29z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
