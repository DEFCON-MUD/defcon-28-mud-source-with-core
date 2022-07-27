inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 2, 6 }));
  set_short( "Corridor - x36y2z6" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y2z6.c",
  "east" : DIR+"/rooms/x37y2z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
