inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 44, 8 }));
  set_short( "Passage - x52y44z8" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y44z8.c",
  "east" : DIR+"/rooms/x53y44z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
