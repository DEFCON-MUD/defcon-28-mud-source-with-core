inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 48, 6 }));
  set_short( "Hallway - x34y48z6" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y48z6.c",
  "east" : DIR+"/rooms/x35y48z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
