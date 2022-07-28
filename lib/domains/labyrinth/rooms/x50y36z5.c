inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 36, 5 }));
  set_short( "Hallway - x50y36z5" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y36z5.c",
  "east" : DIR+"/rooms/x51y36z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
