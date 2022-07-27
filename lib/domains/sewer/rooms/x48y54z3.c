inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 54, 3 }));
  set_short( "Corridor - x48y54z3" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y54z3.c",
  "east" : DIR+"/rooms/x49y54z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
