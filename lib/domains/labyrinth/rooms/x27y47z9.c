inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 47, 9 }));
  set_short( "Passage - x27y47z9" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y48z9.c",
  "south" : DIR+"/rooms/x27y46z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
