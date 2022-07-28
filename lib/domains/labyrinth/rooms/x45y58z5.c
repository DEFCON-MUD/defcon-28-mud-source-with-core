inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 58, 5 }));
  set_short( "Hallway - x45y58z5" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y58z5.c",
  "east" : DIR+"/rooms/x46y58z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
