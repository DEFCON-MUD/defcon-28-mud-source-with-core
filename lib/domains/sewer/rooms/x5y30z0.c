inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 30, 0 }));
  set_short( "Corridor - x5y30z0" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y30z0.c",
  "south" : DIR+"/rooms/x5y29z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
