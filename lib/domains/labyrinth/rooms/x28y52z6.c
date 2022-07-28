inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 52, 6 }));
  set_short( "Hallway - x28y52z6" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y52z6.c",
  "east" : DIR+"/rooms/x29y52z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
