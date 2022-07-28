inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 56, 7 }));
  set_short( "Passage - x54y56z7" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y56z7.c",
  "east" : DIR+"/rooms/x55y56z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
