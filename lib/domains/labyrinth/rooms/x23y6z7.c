inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 7 }));
  set_short( "Hallway - x23y6z7" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y6z7.c",
  "north" : DIR+"/rooms/x23y7z7.c",
  "south" : DIR+"/rooms/x23y5z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
