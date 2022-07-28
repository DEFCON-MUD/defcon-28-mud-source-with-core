inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 5 }));
  set_short( "Passage - x13y40z5" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y40z5.c",
  "north" : DIR+"/rooms/x13y41z5.c",
  "south" : DIR+"/rooms/x13y39z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
