inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 36, 5 }));
  set_short( "Corridor - x48y36z5" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y36z5.c",
  "east" : DIR+"/rooms/x49y36z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
