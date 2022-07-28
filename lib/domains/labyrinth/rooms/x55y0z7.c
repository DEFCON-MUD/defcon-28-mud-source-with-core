inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 0, 7 }));
  set_short( "Passage - x55y0z7" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y0z7.c",
  "east" : DIR+"/rooms/x56y0z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
