inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 32, 8 }));
  set_short( "Hallway - x31y32z8" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y32z8.c",
  "north" : DIR+"/rooms/x31y33z8.c",
  "south" : DIR+"/rooms/x31y31z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
