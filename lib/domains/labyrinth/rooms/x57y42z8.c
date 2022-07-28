inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 8 }));
  set_short( "Hallway - x57y42z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y43z8.c",
  "south" : DIR+"/rooms/x57y41z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
