inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 49, 9 }));
  set_short( "Passage - x57y49z9" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y50z9.c",
  "south" : DIR+"/rooms/x57y48z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
