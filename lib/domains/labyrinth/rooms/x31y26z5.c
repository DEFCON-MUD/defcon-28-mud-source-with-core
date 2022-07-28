inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 26, 5 }));
  set_short( "Passage - x31y26z5" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y26z5.c",
  "east" : DIR+"/rooms/x32y26z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
