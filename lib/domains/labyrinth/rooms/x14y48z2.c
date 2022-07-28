inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 48, 2 }));
  set_short( "Corridor - x14y48z2" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y48z2.c",
  "east" : DIR+"/rooms/x15y48z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
