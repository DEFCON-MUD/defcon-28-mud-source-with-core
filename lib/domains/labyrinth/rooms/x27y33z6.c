inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 33, 6 }));
  set_short( "Corridor - x27y33z6" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y34z6.c",
  "south" : DIR+"/rooms/x27y32z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
