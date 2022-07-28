inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 9 }));
  set_short( "Corridor - x19y48z9" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y48z9.c",
  "south" : DIR+"/rooms/x19y47z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
