inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 6 }));
  set_short( "Corridor - x21y26z6" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y26z6.c",
  "north" : DIR+"/rooms/x21y27z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
