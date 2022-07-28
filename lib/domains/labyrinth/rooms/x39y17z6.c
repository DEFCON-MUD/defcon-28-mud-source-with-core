inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 17, 6 }));
  set_short( "Hallway - x39y17z6" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y18z6.c",
  "south" : DIR+"/rooms/x39y16z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
