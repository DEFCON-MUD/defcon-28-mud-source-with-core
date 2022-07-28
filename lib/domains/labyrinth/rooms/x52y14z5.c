inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 14, 5 }));
  set_short( "Hallway - x52y14z5" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y14z5.c",
  "east" : DIR+"/rooms/x53y14z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
