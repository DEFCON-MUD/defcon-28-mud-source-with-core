inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 24, 6 }));
  set_short( "Passage - x47y24z6" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y24z6.c",
  "east" : DIR+"/rooms/x48y24z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
