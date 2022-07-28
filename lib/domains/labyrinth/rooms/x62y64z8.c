inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 62, 64, 8 }));
  set_short( "Passage - x62y64z8" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x61y64z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
