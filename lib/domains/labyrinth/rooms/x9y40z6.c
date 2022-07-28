inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 6 }));
  set_short( "Hallway - x9y40z6" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y40z6.c",
  "south" : DIR+"/rooms/x9y39z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
