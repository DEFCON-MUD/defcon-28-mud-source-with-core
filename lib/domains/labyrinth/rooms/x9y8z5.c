inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 8, 5 }));
  set_short( "Passage - x9y8z5" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y8z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
