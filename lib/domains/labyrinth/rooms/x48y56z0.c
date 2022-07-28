inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 56, 0 }));
  set_short( "Corridor - x48y56z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y56z0.c",
  "east" : DIR+"/rooms/x49y56z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
