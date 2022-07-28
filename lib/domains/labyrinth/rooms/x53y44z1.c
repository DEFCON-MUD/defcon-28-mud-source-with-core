inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 44, 1 }));
  set_short( "Passage - x53y44z1" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y44z1.c",
  "east" : DIR+"/rooms/x54y44z1.c",
  "south" : DIR+"/rooms/x53y43z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
