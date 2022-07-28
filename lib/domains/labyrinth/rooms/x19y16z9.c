inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 16, 9 }));
  set_short( "Passage - x19y16z9" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y16z9.c",
  "east" : DIR+"/rooms/x20y16z9.c",
  "north" : DIR+"/rooms/x19y17z9.c",
  "south" : DIR+"/rooms/x19y15z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
