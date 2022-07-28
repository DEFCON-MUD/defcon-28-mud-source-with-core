inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 42, 1 }));
  set_short( "Corridor - x41y42z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y42z1.c",
  "east" : DIR+"/rooms/x42y42z1.c",
  "north" : DIR+"/rooms/x41y43z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
