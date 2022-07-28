inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 48, 6 }));
  set_short( "Passage - x35y48z6" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y48z6.c",
  "south" : DIR+"/rooms/x35y47z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
