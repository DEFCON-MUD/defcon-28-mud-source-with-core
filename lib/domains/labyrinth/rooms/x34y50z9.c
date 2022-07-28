inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 50, 9 }));
  set_short( "Hallway - x34y50z9" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y50z9.c",
  "east" : DIR+"/rooms/x35y50z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
