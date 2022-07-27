inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 60, 0 }));
  set_short( "Hallway - x55y60z0" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y61z0.c",
  "south" : DIR+"/rooms/x55y59z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
