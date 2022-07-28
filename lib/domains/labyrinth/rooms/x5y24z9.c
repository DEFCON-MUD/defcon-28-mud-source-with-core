inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 24, 9 }));
  set_short( "Hallway - x5y24z9" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y24z9.c",
  "south" : DIR+"/rooms/x5y23z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
