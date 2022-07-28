inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 36, 6 }));
  set_short( "Corridor - x44y36z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y36z6.c",
  "east" : DIR+"/rooms/x45y36z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
