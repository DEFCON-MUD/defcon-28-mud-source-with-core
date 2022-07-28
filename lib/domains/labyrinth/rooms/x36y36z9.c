inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 36, 9 }));
  set_short( "Corridor - x36y36z9" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y36z9.c",
  "east" : DIR+"/rooms/x37y36z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
