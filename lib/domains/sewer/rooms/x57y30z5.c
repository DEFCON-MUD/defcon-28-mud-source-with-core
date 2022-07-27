inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 5 }));
  set_short( "Passage - x57y30z5" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y30z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
