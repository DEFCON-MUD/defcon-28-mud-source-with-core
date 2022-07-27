inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 62, 64, 7 }));
  set_short( "Corridor - x62y64z7" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x61y64z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
