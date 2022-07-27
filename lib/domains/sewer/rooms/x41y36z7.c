inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 36, 7 }));
  set_short( "Hallway - x41y36z7" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y36z7.c",
  "north" : DIR+"/rooms/x41y37z7.c",
  "south" : DIR+"/rooms/x41y35z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
