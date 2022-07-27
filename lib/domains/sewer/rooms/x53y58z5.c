inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 58, 5 }));
  set_short( "Hallway - x53y58z5" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y58z5.c",
  "east" : DIR+"/rooms/x54y58z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
