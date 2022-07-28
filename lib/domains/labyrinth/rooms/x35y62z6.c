inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 6 }));
  set_short( "Passage - x35y62z6" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y62z6.c",
  "east" : DIR+"/rooms/x36y62z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
