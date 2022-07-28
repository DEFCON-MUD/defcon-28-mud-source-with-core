inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 18, 1 }));
  set_short( "Passage - x15y18z1" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y19z1.c",
  "south" : DIR+"/rooms/x15y17z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
