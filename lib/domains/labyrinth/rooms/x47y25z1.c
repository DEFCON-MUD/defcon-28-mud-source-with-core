inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 25, 1 }));
  set_short( "Passage - x47y25z1" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y26z1.c",
  "south" : DIR+"/rooms/x47y24z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
