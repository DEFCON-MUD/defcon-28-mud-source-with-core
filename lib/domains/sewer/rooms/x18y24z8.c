inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 24, 8 }));
  set_short( "Corridor - x18y24z8" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y24z8.c",
  "east" : DIR+"/rooms/x19y24z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
