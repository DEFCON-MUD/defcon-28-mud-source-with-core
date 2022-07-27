inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 14, 2 }));
  set_short( "Hallway - x16y14z2" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y14z2.c",
  "east" : DIR+"/rooms/x17y14z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
