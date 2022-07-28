inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 21, 8 }));
  set_short( "Hallway - x47y21z8" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y22z8.c",
  "south" : DIR+"/rooms/x47y20z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
