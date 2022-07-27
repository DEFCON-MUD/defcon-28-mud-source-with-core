inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 60, 1 }));
  set_short( "Passage - x59y60z1" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y60z1.c",
  "south" : DIR+"/rooms/x59y59z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
