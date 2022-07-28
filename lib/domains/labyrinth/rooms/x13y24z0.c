inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 24, 0 }));
  set_short( "Hallway - x13y24z0" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y25z0.c",
  "south" : DIR+"/rooms/x13y23z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
