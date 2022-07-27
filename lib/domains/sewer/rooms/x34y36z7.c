inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 36, 7 }));
  set_short( "Hallway - x34y36z7" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y36z7.c",
  "east" : DIR+"/rooms/x35y36z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
